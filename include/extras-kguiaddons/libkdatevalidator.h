#pragma once
#ifndef SRC_EXTRAS_KGUIADDONSC_LIBKDATEVALIDATOR_H
#define SRC_EXTRAS_KGUIADDONSC_LIBKDATEVALIDATOR_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KDateValidator KDateValidator;
typedef struct QChildEvent QChildEvent;
typedef struct QDate QDate;
typedef struct QEvent QEvent;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QTimerEvent QTimerEvent;
typedef struct QValidator QValidator;
#endif

KDateValidator* KDateValidator_new();
KDateValidator* KDateValidator_new2(QObject* parent);
QMetaObject* KDateValidator_MetaObject(const KDateValidator* self);
void* KDateValidator_Metacast(KDateValidator* self, const char* param1);
int KDateValidator_Metacall(KDateValidator* self, int param1, int param2, void** param3);
void KDateValidator_OnMetacall(KDateValidator* self, intptr_t slot);
int KDateValidator_QBaseMetacall(KDateValidator* self, int param1, int param2, void** param3);
libqt_string KDateValidator_Tr(const char* s);
int KDateValidator_Validate(const KDateValidator* self, libqt_string text, int* e);
void KDateValidator_OnValidate(const KDateValidator* self, intptr_t slot);
int KDateValidator_QBaseValidate(const KDateValidator* self, libqt_string text, int* e);
void KDateValidator_Fixup(const KDateValidator* self, libqt_string input);
void KDateValidator_OnFixup(const KDateValidator* self, intptr_t slot);
void KDateValidator_QBaseFixup(const KDateValidator* self, libqt_string input);
int KDateValidator_Date(const KDateValidator* self, const libqt_string text, QDate* date);
libqt_string KDateValidator_Tr2(const char* s, const char* c);
libqt_string KDateValidator_Tr3(const char* s, const char* c, int n);
bool KDateValidator_Event(KDateValidator* self, QEvent* event);
void KDateValidator_OnEvent(KDateValidator* self, intptr_t slot);
bool KDateValidator_QBaseEvent(KDateValidator* self, QEvent* event);
bool KDateValidator_EventFilter(KDateValidator* self, QObject* watched, QEvent* event);
void KDateValidator_OnEventFilter(KDateValidator* self, intptr_t slot);
bool KDateValidator_QBaseEventFilter(KDateValidator* self, QObject* watched, QEvent* event);
void KDateValidator_TimerEvent(KDateValidator* self, QTimerEvent* event);
void KDateValidator_OnTimerEvent(KDateValidator* self, intptr_t slot);
void KDateValidator_QBaseTimerEvent(KDateValidator* self, QTimerEvent* event);
void KDateValidator_ChildEvent(KDateValidator* self, QChildEvent* event);
void KDateValidator_OnChildEvent(KDateValidator* self, intptr_t slot);
void KDateValidator_QBaseChildEvent(KDateValidator* self, QChildEvent* event);
void KDateValidator_CustomEvent(KDateValidator* self, QEvent* event);
void KDateValidator_OnCustomEvent(KDateValidator* self, intptr_t slot);
void KDateValidator_QBaseCustomEvent(KDateValidator* self, QEvent* event);
void KDateValidator_ConnectNotify(KDateValidator* self, const QMetaMethod* signal);
void KDateValidator_OnConnectNotify(KDateValidator* self, intptr_t slot);
void KDateValidator_QBaseConnectNotify(KDateValidator* self, const QMetaMethod* signal);
void KDateValidator_DisconnectNotify(KDateValidator* self, const QMetaMethod* signal);
void KDateValidator_OnDisconnectNotify(KDateValidator* self, intptr_t slot);
void KDateValidator_QBaseDisconnectNotify(KDateValidator* self, const QMetaMethod* signal);
QObject* KDateValidator_Sender(const KDateValidator* self);
void KDateValidator_OnSender(const KDateValidator* self, intptr_t slot);
QObject* KDateValidator_QBaseSender(const KDateValidator* self);
int KDateValidator_SenderSignalIndex(const KDateValidator* self);
void KDateValidator_OnSenderSignalIndex(const KDateValidator* self, intptr_t slot);
int KDateValidator_QBaseSenderSignalIndex(const KDateValidator* self);
int KDateValidator_Receivers(const KDateValidator* self, const char* signal);
void KDateValidator_OnReceivers(const KDateValidator* self, intptr_t slot);
int KDateValidator_QBaseReceivers(const KDateValidator* self, const char* signal);
bool KDateValidator_IsSignalConnected(const KDateValidator* self, const QMetaMethod* signal);
void KDateValidator_OnIsSignalConnected(const KDateValidator* self, intptr_t slot);
bool KDateValidator_QBaseIsSignalConnected(const KDateValidator* self, const QMetaMethod* signal);
void KDateValidator_Delete(KDateValidator* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
