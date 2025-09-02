#pragma once
#ifndef SRC_EXTRAS_KTEXTWIDGETSC_LIBKFIND_H
#define SRC_EXTRAS_KTEXTWIDGETSC_LIBKFIND_H

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
typedef struct QChildEvent QChildEvent;
typedef struct QDialog QDialog;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QRegularExpressionMatch QRegularExpressionMatch;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
#endif

KFind* KFind_new(const libqt_string pattern, long options, QWidget* parent);
KFind* KFind_new2(const libqt_string pattern, long options, QWidget* parent, QWidget* findDialog);
QMetaObject* KFind_MetaObject(const KFind* self);
void* KFind_Metacast(KFind* self, const char* param1);
int KFind_Metacall(KFind* self, int param1, int param2, void** param3);
libqt_string KFind_Tr(const char* s);
bool KFind_NeedData(const KFind* self);
void KFind_SetData(KFind* self, const libqt_string data);
void KFind_SetData2(KFind* self, int id, const libqt_string data);
int KFind_Find(KFind* self);
long KFind_Options(const KFind* self);
void KFind_SetOptions(KFind* self, long options);
libqt_string KFind_Pattern(const KFind* self);
void KFind_SetPattern(KFind* self, const libqt_string pattern);
int KFind_NumMatches(const KFind* self);
void KFind_ResetCounts(KFind* self);
bool KFind_ValidateMatch(KFind* self, const libqt_string text, int index, int matchedlength);
bool KFind_ShouldRestart(const KFind* self, bool forceAsking, bool showNumMatches);
int KFind_Find2(const libqt_string text, const libqt_string pattern, int index, long options, int* matchedLength, QRegularExpressionMatch* rmatch);
void KFind_DisplayFinalDialog(const KFind* self);
QDialog* KFind_FindNextDialog(KFind* self);
void KFind_CloseFindNextDialog(KFind* self);
int KFind_Index(const KFind* self);
void KFind_TextFound(KFind* self, const libqt_string text, int matchingIndex, int matchedLength);
void KFind_Connect_TextFound(KFind* self, intptr_t slot);
void KFind_TextFoundAtId(KFind* self, int id, int matchingIndex, int matchedLength);
void KFind_Connect_TextFoundAtId(KFind* self, intptr_t slot);
void KFind_FindNext(KFind* self);
void KFind_Connect_FindNext(KFind* self, intptr_t slot);
void KFind_OptionsChanged(KFind* self);
void KFind_Connect_OptionsChanged(KFind* self, intptr_t slot);
void KFind_DialogClosed(KFind* self);
void KFind_Connect_DialogClosed(KFind* self, intptr_t slot);
libqt_string KFind_Tr2(const char* s, const char* c);
libqt_string KFind_Tr3(const char* s, const char* c, int n);
void KFind_SetData22(KFind* self, const libqt_string data, int startPos);
void KFind_SetData3(KFind* self, int id, const libqt_string data, int startPos);
QDialog* KFind_FindNextDialog1(KFind* self, bool create);
void KFind_OnMetacall(KFind* self, intptr_t slot);
int KFind_QBaseMetacall(KFind* self, int param1, int param2, void** param3);
void KFind_OnSetOptions(KFind* self, intptr_t slot);
void KFind_QBaseSetOptions(KFind* self, long options);
void KFind_OnResetCounts(KFind* self, intptr_t slot);
void KFind_QBaseResetCounts(KFind* self);
void KFind_OnValidateMatch(KFind* self, intptr_t slot);
bool KFind_QBaseValidateMatch(KFind* self, const libqt_string text, int index, int matchedlength);
void KFind_OnShouldRestart(const KFind* self, intptr_t slot);
bool KFind_QBaseShouldRestart(const KFind* self, bool forceAsking, bool showNumMatches);
void KFind_OnDisplayFinalDialog(const KFind* self, intptr_t slot);
void KFind_QBaseDisplayFinalDialog(const KFind* self);
bool KFind_Event(KFind* self, QEvent* event);
void KFind_OnEvent(KFind* self, intptr_t slot);
bool KFind_QBaseEvent(KFind* self, QEvent* event);
bool KFind_EventFilter(KFind* self, QObject* watched, QEvent* event);
void KFind_OnEventFilter(KFind* self, intptr_t slot);
bool KFind_QBaseEventFilter(KFind* self, QObject* watched, QEvent* event);
void KFind_TimerEvent(KFind* self, QTimerEvent* event);
void KFind_OnTimerEvent(KFind* self, intptr_t slot);
void KFind_QBaseTimerEvent(KFind* self, QTimerEvent* event);
void KFind_ChildEvent(KFind* self, QChildEvent* event);
void KFind_OnChildEvent(KFind* self, intptr_t slot);
void KFind_QBaseChildEvent(KFind* self, QChildEvent* event);
void KFind_CustomEvent(KFind* self, QEvent* event);
void KFind_OnCustomEvent(KFind* self, intptr_t slot);
void KFind_QBaseCustomEvent(KFind* self, QEvent* event);
void KFind_ConnectNotify(KFind* self, const QMetaMethod* signal);
void KFind_OnConnectNotify(KFind* self, intptr_t slot);
void KFind_QBaseConnectNotify(KFind* self, const QMetaMethod* signal);
void KFind_DisconnectNotify(KFind* self, const QMetaMethod* signal);
void KFind_OnDisconnectNotify(KFind* self, intptr_t slot);
void KFind_QBaseDisconnectNotify(KFind* self, const QMetaMethod* signal);
QWidget* KFind_ParentWidget(const KFind* self);
void KFind_OnParentWidget(const KFind* self, intptr_t slot);
QWidget* KFind_QBaseParentWidget(const KFind* self);
QWidget* KFind_DialogsParent(const KFind* self);
void KFind_OnDialogsParent(const KFind* self, intptr_t slot);
QWidget* KFind_QBaseDialogsParent(const KFind* self);
QObject* KFind_Sender(const KFind* self);
void KFind_OnSender(const KFind* self, intptr_t slot);
QObject* KFind_QBaseSender(const KFind* self);
int KFind_SenderSignalIndex(const KFind* self);
void KFind_OnSenderSignalIndex(const KFind* self, intptr_t slot);
int KFind_QBaseSenderSignalIndex(const KFind* self);
int KFind_Receivers(const KFind* self, const char* signal);
void KFind_OnReceivers(const KFind* self, intptr_t slot);
int KFind_QBaseReceivers(const KFind* self, const char* signal);
bool KFind_IsSignalConnected(const KFind* self, const QMetaMethod* signal);
void KFind_OnIsSignalConnected(const KFind* self, intptr_t slot);
bool KFind_QBaseIsSignalConnected(const KFind* self, const QMetaMethod* signal);
void KFind_Delete(KFind* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
