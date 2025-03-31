#pragma once
#ifndef SRCC_LIBQSHORTCUT_H
#define SRCC_LIBQSHORTCUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

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
typedef struct QKeySequence QKeySequence;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QObject QObject;
typedef struct QShortcut QShortcut;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QShortcut* QShortcut_new(QObject* parent);
QShortcut* QShortcut_new2(QKeySequence* key, QObject* parent);
QShortcut* QShortcut_new3(int key, QObject* parent);
QShortcut* QShortcut_new4(QKeySequence* key, QObject* parent, const char* member);
QShortcut* QShortcut_new5(QKeySequence* key, QObject* parent, const char* member, const char* ambiguousMember);
QShortcut* QShortcut_new6(QKeySequence* key, QObject* parent, const char* member, const char* ambiguousMember, int context);
QShortcut* QShortcut_new7(int key, QObject* parent, const char* member);
QShortcut* QShortcut_new8(int key, QObject* parent, const char* member, const char* ambiguousMember);
QShortcut* QShortcut_new9(int key, QObject* parent, const char* member, const char* ambiguousMember, int context);
QMetaObject* QShortcut_MetaObject(const QShortcut* self);
void* QShortcut_Metacast(QShortcut* self, const char* param1);
int QShortcut_Metacall(QShortcut* self, int param1, int param2, void** param3);
void QShortcut_OnMetacall(QShortcut* self, intptr_t slot);
int QShortcut_QBaseMetacall(QShortcut* self, int param1, int param2, void** param3);
libqt_string QShortcut_Tr(const char* s);
void QShortcut_SetKey(QShortcut* self, QKeySequence* key);
QKeySequence* QShortcut_Key(const QShortcut* self);
void QShortcut_SetKeys(QShortcut* self, int key);
void QShortcut_SetKeysWithKeys(QShortcut* self, libqt_list /* of QKeySequence* */ keys);
libqt_list /* of QKeySequence* */ QShortcut_Keys(const QShortcut* self);
void QShortcut_SetEnabled(QShortcut* self, bool enable);
bool QShortcut_IsEnabled(const QShortcut* self);
void QShortcut_SetContext(QShortcut* self, int context);
int QShortcut_Context(const QShortcut* self);
void QShortcut_SetAutoRepeat(QShortcut* self, bool on);
bool QShortcut_AutoRepeat(const QShortcut* self);
int QShortcut_Id(const QShortcut* self);
void QShortcut_SetWhatsThis(QShortcut* self, libqt_string text);
libqt_string QShortcut_WhatsThis(const QShortcut* self);
void QShortcut_Activated(QShortcut* self);
void QShortcut_Connect_Activated(QShortcut* self, intptr_t slot);
void QShortcut_ActivatedAmbiguously(QShortcut* self);
void QShortcut_Connect_ActivatedAmbiguously(QShortcut* self, intptr_t slot);
bool QShortcut_Event(QShortcut* self, QEvent* e);
void QShortcut_OnEvent(QShortcut* self, intptr_t slot);
bool QShortcut_QBaseEvent(QShortcut* self, QEvent* e);
libqt_string QShortcut_Tr2(const char* s, const char* c);
libqt_string QShortcut_Tr3(const char* s, const char* c, int n);
bool QShortcut_EventFilter(QShortcut* self, QObject* watched, QEvent* event);
void QShortcut_OnEventFilter(QShortcut* self, intptr_t slot);
bool QShortcut_QBaseEventFilter(QShortcut* self, QObject* watched, QEvent* event);
void QShortcut_TimerEvent(QShortcut* self, QTimerEvent* event);
void QShortcut_OnTimerEvent(QShortcut* self, intptr_t slot);
void QShortcut_QBaseTimerEvent(QShortcut* self, QTimerEvent* event);
void QShortcut_ChildEvent(QShortcut* self, QChildEvent* event);
void QShortcut_OnChildEvent(QShortcut* self, intptr_t slot);
void QShortcut_QBaseChildEvent(QShortcut* self, QChildEvent* event);
void QShortcut_CustomEvent(QShortcut* self, QEvent* event);
void QShortcut_OnCustomEvent(QShortcut* self, intptr_t slot);
void QShortcut_QBaseCustomEvent(QShortcut* self, QEvent* event);
void QShortcut_ConnectNotify(QShortcut* self, QMetaMethod* signal);
void QShortcut_OnConnectNotify(QShortcut* self, intptr_t slot);
void QShortcut_QBaseConnectNotify(QShortcut* self, QMetaMethod* signal);
void QShortcut_DisconnectNotify(QShortcut* self, QMetaMethod* signal);
void QShortcut_OnDisconnectNotify(QShortcut* self, intptr_t slot);
void QShortcut_QBaseDisconnectNotify(QShortcut* self, QMetaMethod* signal);
QObject* QShortcut_Sender(const QShortcut* self);
void QShortcut_OnSender(const QShortcut* self, intptr_t slot);
QObject* QShortcut_QBaseSender(const QShortcut* self);
int QShortcut_SenderSignalIndex(const QShortcut* self);
void QShortcut_OnSenderSignalIndex(const QShortcut* self, intptr_t slot);
int QShortcut_QBaseSenderSignalIndex(const QShortcut* self);
int QShortcut_Receivers(const QShortcut* self, const char* signal);
void QShortcut_OnReceivers(const QShortcut* self, intptr_t slot);
int QShortcut_QBaseReceivers(const QShortcut* self, const char* signal);
bool QShortcut_IsSignalConnected(const QShortcut* self, QMetaMethod* signal);
void QShortcut_OnIsSignalConnected(const QShortcut* self, intptr_t slot);
bool QShortcut_QBaseIsSignalConnected(const QShortcut* self, QMetaMethod* signal);
void QShortcut_Delete(QShortcut* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
