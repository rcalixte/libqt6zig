#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCIABSTRACTAPIS_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBQSCIABSTRACTAPIS_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QsciAbstractAPIs QsciAbstractAPIs;
typedef struct QsciLexer QsciLexer;
#endif

QsciAbstractAPIs* QsciAbstractAPIs_new(QsciLexer* lexer);
QMetaObject* QsciAbstractAPIs_MetaObject(const QsciAbstractAPIs* self);
void* QsciAbstractAPIs_Metacast(QsciAbstractAPIs* self, const char* param1);
int QsciAbstractAPIs_Metacall(QsciAbstractAPIs* self, int param1, int param2, void** param3);
libqt_string QsciAbstractAPIs_Tr(const char* s);
QsciLexer* QsciAbstractAPIs_Lexer(const QsciAbstractAPIs* self);
void QsciAbstractAPIs_UpdateAutoCompletionList(QsciAbstractAPIs* self, const libqt_list /* of libqt_string */ context, libqt_list /* of libqt_string */ list);
void QsciAbstractAPIs_AutoCompletionSelected(QsciAbstractAPIs* self, const libqt_string selection);
libqt_list /* of libqt_string */ QsciAbstractAPIs_CallTips(QsciAbstractAPIs* self, const libqt_list /* of libqt_string */ context, int commas, int style, libqt_list /* of int */ shifts);
libqt_string QsciAbstractAPIs_Tr2(const char* s, const char* c);
libqt_string QsciAbstractAPIs_Tr3(const char* s, const char* c, int n);
void QsciAbstractAPIs_OnMetacall(QsciAbstractAPIs* self, intptr_t slot);
int QsciAbstractAPIs_QBaseMetacall(QsciAbstractAPIs* self, int param1, int param2, void** param3);
void QsciAbstractAPIs_OnUpdateAutoCompletionList(QsciAbstractAPIs* self, intptr_t slot);
void QsciAbstractAPIs_QBaseUpdateAutoCompletionList(QsciAbstractAPIs* self, const libqt_list /* of libqt_string */ context, libqt_list /* of libqt_string */ list);
void QsciAbstractAPIs_OnAutoCompletionSelected(QsciAbstractAPIs* self, intptr_t slot);
void QsciAbstractAPIs_QBaseAutoCompletionSelected(QsciAbstractAPIs* self, const libqt_string selection);
void QsciAbstractAPIs_OnCallTips(QsciAbstractAPIs* self, intptr_t slot);
libqt_list /* of libqt_string */ QsciAbstractAPIs_QBaseCallTips(QsciAbstractAPIs* self, const libqt_list /* of libqt_string */ context, int commas, int style, libqt_list /* of int */ shifts);
bool QsciAbstractAPIs_Event(QsciAbstractAPIs* self, QEvent* event);
void QsciAbstractAPIs_OnEvent(QsciAbstractAPIs* self, intptr_t slot);
bool QsciAbstractAPIs_QBaseEvent(QsciAbstractAPIs* self, QEvent* event);
bool QsciAbstractAPIs_EventFilter(QsciAbstractAPIs* self, QObject* watched, QEvent* event);
void QsciAbstractAPIs_OnEventFilter(QsciAbstractAPIs* self, intptr_t slot);
bool QsciAbstractAPIs_QBaseEventFilter(QsciAbstractAPIs* self, QObject* watched, QEvent* event);
void QsciAbstractAPIs_TimerEvent(QsciAbstractAPIs* self, QTimerEvent* event);
void QsciAbstractAPIs_OnTimerEvent(QsciAbstractAPIs* self, intptr_t slot);
void QsciAbstractAPIs_QBaseTimerEvent(QsciAbstractAPIs* self, QTimerEvent* event);
void QsciAbstractAPIs_ChildEvent(QsciAbstractAPIs* self, QChildEvent* event);
void QsciAbstractAPIs_OnChildEvent(QsciAbstractAPIs* self, intptr_t slot);
void QsciAbstractAPIs_QBaseChildEvent(QsciAbstractAPIs* self, QChildEvent* event);
void QsciAbstractAPIs_CustomEvent(QsciAbstractAPIs* self, QEvent* event);
void QsciAbstractAPIs_OnCustomEvent(QsciAbstractAPIs* self, intptr_t slot);
void QsciAbstractAPIs_QBaseCustomEvent(QsciAbstractAPIs* self, QEvent* event);
void QsciAbstractAPIs_ConnectNotify(QsciAbstractAPIs* self, const QMetaMethod* signal);
void QsciAbstractAPIs_OnConnectNotify(QsciAbstractAPIs* self, intptr_t slot);
void QsciAbstractAPIs_QBaseConnectNotify(QsciAbstractAPIs* self, const QMetaMethod* signal);
void QsciAbstractAPIs_DisconnectNotify(QsciAbstractAPIs* self, const QMetaMethod* signal);
void QsciAbstractAPIs_OnDisconnectNotify(QsciAbstractAPIs* self, intptr_t slot);
void QsciAbstractAPIs_QBaseDisconnectNotify(QsciAbstractAPIs* self, const QMetaMethod* signal);
QObject* QsciAbstractAPIs_Sender(const QsciAbstractAPIs* self);
void QsciAbstractAPIs_OnSender(const QsciAbstractAPIs* self, intptr_t slot);
QObject* QsciAbstractAPIs_QBaseSender(const QsciAbstractAPIs* self);
int QsciAbstractAPIs_SenderSignalIndex(const QsciAbstractAPIs* self);
void QsciAbstractAPIs_OnSenderSignalIndex(const QsciAbstractAPIs* self, intptr_t slot);
int QsciAbstractAPIs_QBaseSenderSignalIndex(const QsciAbstractAPIs* self);
int QsciAbstractAPIs_Receivers(const QsciAbstractAPIs* self, const char* signal);
void QsciAbstractAPIs_OnReceivers(const QsciAbstractAPIs* self, intptr_t slot);
int QsciAbstractAPIs_QBaseReceivers(const QsciAbstractAPIs* self, const char* signal);
bool QsciAbstractAPIs_IsSignalConnected(const QsciAbstractAPIs* self, const QMetaMethod* signal);
void QsciAbstractAPIs_OnIsSignalConnected(const QsciAbstractAPIs* self, intptr_t slot);
bool QsciAbstractAPIs_QBaseIsSignalConnected(const QsciAbstractAPIs* self, const QMetaMethod* signal);
void QsciAbstractAPIs_Delete(QsciAbstractAPIs* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
