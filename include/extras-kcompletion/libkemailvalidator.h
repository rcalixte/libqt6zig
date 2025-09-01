#pragma once
#ifndef SRC_EXTRAS_KCOMPLETIONC_LIBKEMAILVALIDATOR_H
#define SRC_EXTRAS_KCOMPLETIONC_LIBKEMAILVALIDATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KEmailValidator KEmailValidator;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QValidator QValidator;
#endif

KEmailValidator* KEmailValidator_new();
KEmailValidator* KEmailValidator_new2(QObject* parent);
QMetaObject* KEmailValidator_MetaObject(const KEmailValidator* self);
void* KEmailValidator_Metacast(KEmailValidator* self, const char* param1);
int KEmailValidator_Metacall(KEmailValidator* self, int param1, int param2, void** param3);
libqt_string KEmailValidator_Tr(const char* s);
int KEmailValidator_Validate(const KEmailValidator* self, libqt_string str, int* pos);
void KEmailValidator_Fixup(const KEmailValidator* self, libqt_string str);
libqt_string KEmailValidator_Tr2(const char* s, const char* c);
libqt_string KEmailValidator_Tr3(const char* s, const char* c, int n);
void KEmailValidator_OnMetacall(KEmailValidator* self, intptr_t slot);
int KEmailValidator_QBaseMetacall(KEmailValidator* self, int param1, int param2, void** param3);
void KEmailValidator_OnValidate(const KEmailValidator* self, intptr_t slot);
int KEmailValidator_QBaseValidate(const KEmailValidator* self, libqt_string str, int* pos);
void KEmailValidator_OnFixup(const KEmailValidator* self, intptr_t slot);
void KEmailValidator_QBaseFixup(const KEmailValidator* self, libqt_string str);
bool KEmailValidator_Event(KEmailValidator* self, QEvent* event);
void KEmailValidator_OnEvent(KEmailValidator* self, intptr_t slot);
bool KEmailValidator_QBaseEvent(KEmailValidator* self, QEvent* event);
bool KEmailValidator_EventFilter(KEmailValidator* self, QObject* watched, QEvent* event);
void KEmailValidator_OnEventFilter(KEmailValidator* self, intptr_t slot);
bool KEmailValidator_QBaseEventFilter(KEmailValidator* self, QObject* watched, QEvent* event);
void KEmailValidator_TimerEvent(KEmailValidator* self, QTimerEvent* event);
void KEmailValidator_OnTimerEvent(KEmailValidator* self, intptr_t slot);
void KEmailValidator_QBaseTimerEvent(KEmailValidator* self, QTimerEvent* event);
void KEmailValidator_ChildEvent(KEmailValidator* self, QChildEvent* event);
void KEmailValidator_OnChildEvent(KEmailValidator* self, intptr_t slot);
void KEmailValidator_QBaseChildEvent(KEmailValidator* self, QChildEvent* event);
void KEmailValidator_CustomEvent(KEmailValidator* self, QEvent* event);
void KEmailValidator_OnCustomEvent(KEmailValidator* self, intptr_t slot);
void KEmailValidator_QBaseCustomEvent(KEmailValidator* self, QEvent* event);
void KEmailValidator_ConnectNotify(KEmailValidator* self, const QMetaMethod* signal);
void KEmailValidator_OnConnectNotify(KEmailValidator* self, intptr_t slot);
void KEmailValidator_QBaseConnectNotify(KEmailValidator* self, const QMetaMethod* signal);
void KEmailValidator_DisconnectNotify(KEmailValidator* self, const QMetaMethod* signal);
void KEmailValidator_OnDisconnectNotify(KEmailValidator* self, intptr_t slot);
void KEmailValidator_QBaseDisconnectNotify(KEmailValidator* self, const QMetaMethod* signal);
QObject* KEmailValidator_Sender(const KEmailValidator* self);
void KEmailValidator_OnSender(const KEmailValidator* self, intptr_t slot);
QObject* KEmailValidator_QBaseSender(const KEmailValidator* self);
int KEmailValidator_SenderSignalIndex(const KEmailValidator* self);
void KEmailValidator_OnSenderSignalIndex(const KEmailValidator* self, intptr_t slot);
int KEmailValidator_QBaseSenderSignalIndex(const KEmailValidator* self);
int KEmailValidator_Receivers(const KEmailValidator* self, const char* signal);
void KEmailValidator_OnReceivers(const KEmailValidator* self, intptr_t slot);
int KEmailValidator_QBaseReceivers(const KEmailValidator* self, const char* signal);
bool KEmailValidator_IsSignalConnected(const KEmailValidator* self, const QMetaMethod* signal);
void KEmailValidator_OnIsSignalConnected(const KEmailValidator* self, intptr_t slot);
bool KEmailValidator_QBaseIsSignalConnected(const KEmailValidator* self, const QMetaMethod* signal);
void KEmailValidator_Delete(KEmailValidator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
