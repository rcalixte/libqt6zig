#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCIAPIS_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCIAPIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QsciAPIs QsciAPIs;
typedef struct QsciAbstractAPIs QsciAbstractAPIs;
typedef struct QsciLexer QsciLexer;
#endif

#ifndef __cplusplus
typedef libqt_pair /* tuple of uint32_t and uint32_t */ WordIndex; // C ABI QFlags
#endif

QsciAPIs* QsciAPIs_new(QsciLexer* lexer);
QMetaObject* QsciAPIs_MetaObject(const QsciAPIs* self);
void* QsciAPIs_Metacast(QsciAPIs* self, const char* param1);
int QsciAPIs_Metacall(QsciAPIs* self, int param1, int param2, void** param3);
void QsciAPIs_OnMetacall(QsciAPIs* self, intptr_t slot);
int QsciAPIs_QBaseMetacall(QsciAPIs* self, int param1, int param2, void** param3);
libqt_string QsciAPIs_Tr(const char* s);
void QsciAPIs_Add(QsciAPIs* self, libqt_string entry);
void QsciAPIs_Clear(QsciAPIs* self);
bool QsciAPIs_Load(QsciAPIs* self, libqt_string filename);
void QsciAPIs_Remove(QsciAPIs* self, libqt_string entry);
void QsciAPIs_Prepare(QsciAPIs* self);
void QsciAPIs_CancelPreparation(QsciAPIs* self);
libqt_string QsciAPIs_DefaultPreparedName(const QsciAPIs* self);
bool QsciAPIs_IsPrepared(const QsciAPIs* self);
bool QsciAPIs_LoadPrepared(QsciAPIs* self);
bool QsciAPIs_SavePrepared(const QsciAPIs* self);
void QsciAPIs_UpdateAutoCompletionList(QsciAPIs* self, libqt_list /* of libqt_string */ context, libqt_list /* of libqt_string */ list);
void QsciAPIs_OnUpdateAutoCompletionList(QsciAPIs* self, intptr_t slot);
void QsciAPIs_QBaseUpdateAutoCompletionList(QsciAPIs* self, libqt_list /* of libqt_string */ context, libqt_list /* of libqt_string */ list);
void QsciAPIs_AutoCompletionSelected(QsciAPIs* self, libqt_string sel);
void QsciAPIs_OnAutoCompletionSelected(QsciAPIs* self, intptr_t slot);
void QsciAPIs_QBaseAutoCompletionSelected(QsciAPIs* self, libqt_string sel);
libqt_list /* of libqt_string */ QsciAPIs_CallTips(QsciAPIs* self, libqt_list /* of libqt_string */ context, int commas, int style, libqt_list /* of int */ shifts);
void QsciAPIs_OnCallTips(QsciAPIs* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciAPIs_QBaseCallTips(QsciAPIs* self, libqt_list /* of libqt_string */ context, int commas, int style, libqt_list /* of int */ shifts);
bool QsciAPIs_Event(QsciAPIs* self, QEvent* e);
void QsciAPIs_OnEvent(QsciAPIs* self, intptr_t slot);
bool QsciAPIs_QBaseEvent(QsciAPIs* self, QEvent* e);
libqt_list /* of libqt_string */ QsciAPIs_InstalledAPIFiles(const QsciAPIs* self);
void QsciAPIs_ApiPreparationCancelled(QsciAPIs* self);
void QsciAPIs_Connect_ApiPreparationCancelled(QsciAPIs* self, intptr_t slot);
void QsciAPIs_ApiPreparationStarted(QsciAPIs* self);
void QsciAPIs_Connect_ApiPreparationStarted(QsciAPIs* self, intptr_t slot);
void QsciAPIs_ApiPreparationFinished(QsciAPIs* self);
void QsciAPIs_Connect_ApiPreparationFinished(QsciAPIs* self, intptr_t slot);
libqt_string QsciAPIs_Tr2(const char* s, const char* c);
libqt_string QsciAPIs_Tr3(const char* s, const char* c, int n);
bool QsciAPIs_IsPrepared1(const QsciAPIs* self, libqt_string filename);
bool QsciAPIs_LoadPrepared1(QsciAPIs* self, libqt_string filename);
bool QsciAPIs_SavePrepared1(const QsciAPIs* self, libqt_string filename);
bool QsciAPIs_EventFilter(QsciAPIs* self, QObject* watched, QEvent* event);
void QsciAPIs_OnEventFilter(QsciAPIs* self, intptr_t slot);
bool QsciAPIs_QBaseEventFilter(QsciAPIs* self, QObject* watched, QEvent* event);
void QsciAPIs_TimerEvent(QsciAPIs* self, QTimerEvent* event);
void QsciAPIs_OnTimerEvent(QsciAPIs* self, intptr_t slot);
void QsciAPIs_QBaseTimerEvent(QsciAPIs* self, QTimerEvent* event);
void QsciAPIs_ChildEvent(QsciAPIs* self, QChildEvent* event);
void QsciAPIs_OnChildEvent(QsciAPIs* self, intptr_t slot);
void QsciAPIs_QBaseChildEvent(QsciAPIs* self, QChildEvent* event);
void QsciAPIs_CustomEvent(QsciAPIs* self, QEvent* event);
void QsciAPIs_OnCustomEvent(QsciAPIs* self, intptr_t slot);
void QsciAPIs_QBaseCustomEvent(QsciAPIs* self, QEvent* event);
void QsciAPIs_ConnectNotify(QsciAPIs* self, QMetaMethod* signal);
void QsciAPIs_OnConnectNotify(QsciAPIs* self, intptr_t slot);
void QsciAPIs_QBaseConnectNotify(QsciAPIs* self, QMetaMethod* signal);
void QsciAPIs_DisconnectNotify(QsciAPIs* self, QMetaMethod* signal);
void QsciAPIs_OnDisconnectNotify(QsciAPIs* self, intptr_t slot);
void QsciAPIs_QBaseDisconnectNotify(QsciAPIs* self, QMetaMethod* signal);
QObject* QsciAPIs_Sender(const QsciAPIs* self);
void QsciAPIs_OnSender(const QsciAPIs* self, intptr_t slot);
QObject* QsciAPIs_QBaseSender(const QsciAPIs* self);
int QsciAPIs_SenderSignalIndex(const QsciAPIs* self);
void QsciAPIs_OnSenderSignalIndex(const QsciAPIs* self, intptr_t slot);
int QsciAPIs_QBaseSenderSignalIndex(const QsciAPIs* self);
int QsciAPIs_Receivers(const QsciAPIs* self, const char* signal);
void QsciAPIs_OnReceivers(const QsciAPIs* self, intptr_t slot);
int QsciAPIs_QBaseReceivers(const QsciAPIs* self, const char* signal);
bool QsciAPIs_IsSignalConnected(const QsciAPIs* self, QMetaMethod* signal);
void QsciAPIs_OnIsSignalConnected(const QsciAPIs* self, intptr_t slot);
bool QsciAPIs_QBaseIsSignalConnected(const QsciAPIs* self, QMetaMethod* signal);
void QsciAPIs_Delete(QsciAPIs* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
